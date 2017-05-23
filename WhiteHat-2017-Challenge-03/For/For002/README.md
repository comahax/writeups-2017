# WhiteHat Challenge 03 : For002

**Category:** For
**Points:** 15
**Solves:** 
**Description:**

> We have eavesdropped a piece of network data when a user signed in a website. Find the flag as his password.
>
> You can use Wireshark to read the file pcapng.
> Download file pcap here:
> http://material.wargame.whitehat.vn/challenges/3/For002_ca60a166cf35f9f0567826b31a457df75017bfbb.zip
>
> Submit WhiteHat{sha1(flag)}
>
> Example: flag = Hello World
>
> sha1("Hello World") = 0a4d55a8d778e5022fab701977c5d840bbc486d0
>
> submit: WhiteHat{0a4d55a8d778e5022fab701977c5d840bbc486d0}
>
> (all hash characters in lowercase)

## Write-up

Strings lost.pcap, we can look out the password is "@Bkav123#$challange3", so we sumbit "WhiteHat{0d712cbea97819fa1e1c0a605283b1b912bcf350}"

## Other write-ups and resources
* [Kole and Associates](Original writeup.)
