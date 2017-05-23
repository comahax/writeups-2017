# WhiteHat Challenge 03 : Crypto003

**Category:** Crypto
**Points:** 20
**Solves:** 
**Description:**

> How many type of face in this file? "Read" them and you can get flag.
> Download file here:
> http://material.wargame.whitehat.vn/challenges/3/Crypto003_235f08ecc1532926a2650f9f480da37a90f8c8d4.zip
>
> Submit WhiteHat{sha1(flag)}
> Example: flag = Hello World
> sha1("Hello World") = 0a4d55a8d778e5022fab701977c5d840bbc486d0
> You must submit: WhiteHat{0a4d55a8d778e5022fab701977c5d840bbc486d0}
> (all hash charactera in lowercase)

## Write-up

```
#!/bin/perl
open f1,"<faces.txt";

%b={};

$ee='a';
while($a=<f1>){
	#print $a;
	@cc = split '   ',$a;
	foreach $aa (@cc) {
		@c = split ' ',$aa;
		foreach $d (@c) {
			if(length($d) != 1){
				if($b{$d}){
					print $b{$d};
				}else{
					$b{$d}=$ee;
					print $ee;
					#print "\n". $ee . "\n";
					$ee++;
				}
			}else{
				print $d;
			}
		}
		print " ";
	}
	print "\n";
}

close f1;

```

decrypt is the out text in this site:
http://quipqiup.com/:
fl4g_ctf_is_nightmare
but it need to insert the space into.
f l 4 g _ c t f _ i s _ n i g h t m a r e


## Other write-ups and resources
* <https://github.com/hva314/WhiteHat_Challenge_3>

