#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/mman.h>
#include <stdlib.h>
unsigned char buf[40960];
#define TARGET_FILE "/f1"
int main(int argc, char *argv[])
{
	  unsigned char *code = 0;
	  int i;
	  int n;

	  n = read(1, buf, sizeof(buf) - 1);
	  if (n < 1)
	  {
	          perror("[-] read");
	          return 1;
	  }

	  buf[strlen(buf)-1] = 0;
	  printf("[+] Read in %u bytes, checking for improper formatting...\n", n);
	  for (i=0;i<n;i++)
	  {
	          if (buf[i] != 0x00 && (buf[i] < 0x30 || buf[i] > 0x39))
	          {
	                  printf("[-] Invalid character(s) detected.  Nice try.. %02x\n", buf[i]);
	                  return 1;
	          }
	  }

	  printf("[+] Mapping executable memory...\n");
	  code = mmap(NULL,n,PROT_READ | PROT_WRITE | PROT_EXEC,MAP_ANONYMOUS | MAP_PRIVATE,0,0);

	  printf("[+] Copying in approved bytes...\n");
	  memcpy(code, buf, n);

	  printf("[+] Executing input...\n");
	  int (*ptr)(void) = (int (*)(void)) code;

	  ptr();
}
