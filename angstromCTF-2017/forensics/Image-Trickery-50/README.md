# angstromctf 2017 : Image Trickery

**Category:** forensics
**Points:** 50
**Solves:** 
**Description:**

> What do Twitch emotes have to do with a CTF? No idea, but there's a flag in [here](mystery.png) somewhere. *kappa*
>
> HINT: The colours in this image are just stunning.

## Write-up

use "Stegsolve.jar" to get a QR_CODE picture, to translate it, will get a url link, open the link to get the base64 string, decode the string get the picture, we can see the flag:
  actf{fa1L_F15H}

## Other write-ups and resources
* [UglyFlowers](https://davyboekhout.nl/posts/angstromctf-image-trickery.html)
* [rawsec](https://rawsec.ml/en/angstromCTF-2017-write-ups/#50-image-trickery-forensics)
