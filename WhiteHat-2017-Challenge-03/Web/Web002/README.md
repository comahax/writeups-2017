# WhiteHat Challenge 03 : Web002

**Category:** Web
**Points:** 15
**Solves:** 
**Description:**

> Input right password in the following site and get you can the flag.
>
> URL: http://web02-chal03.wargame.whitehat.vn
>
>
> Submit WhiteHat{sha1(flag)}
>
> V¨ª d? : flag = Hello World
>
> sha1("Hello World") = 0a4d55a8d778e5022fab701977c5d840bbc486d0
>
> submit: WhiteHat{0a4d55a8d778e5022fab701977c5d840bbc486d0}
> (all hash characters in lowercase)
>
> Hint:
>
> 26/04/2017 11:48:52 	can you code javascipt with only 6 characters?
>
> 26/04/2017 15:31:21 	do you know how to code javascipt with only 6 characters?
>
> 26/04/2017 15:32:02 	

## Write-up

copy the script code to a file, run it by node.js, we will get the decrypt javascript code. 

```
var arr=["a","3","e","w","o","n","s","r","t","1","z","f","7","k","m",'d','h'];
var wellplayed=""; 
for(i=1;i<13;i++) {   
	if(i % 4 == 0){                
		wellplayed += arr[i-2]  }  
		else    {               wellplayed += arr[i+2]  }
  }

...

```
Can get the login password : "wonert1sf7kz", login by this password to get the flag: "Flag: easy_javascript_right?"

Submit is:
WhiteHat{9f1a7c9986e0ce43e383935ac88d37e77a659996}

## Other write-ups and resources
