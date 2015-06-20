# Krypton
An implementation of some cryptographic standards written in C. Currently availible standards are the OneTimePad and the RC4 stream cipher. 

## Example
Following is an example of an implementation of the RC4 stream cipher:

```
#include <stdio.h>
#include "Ciphers/StreamCipher.h"
#include "PRGs/RC4.h"

int main() {
	BinStr msg = ASCII_to_BinStr("This is my plain text, which will be encrypted.");
	BinStr key = ASCII_to_BinStr("This is my key.");
	BinStr cip = StreamEncrypt(msg, key, RC4);

	printf("\nThe cipher text is: "); print(cip);

	BinStr decrypt = StreamDecrypt(cip, key, RC4);

	printf("\nThe plain text is: "); print(decrypt);

	return 0;
}
```

To compile the above file, the following should be used:

```
gcc Example.c Structures/BinStr.c Ciphers/StreamCipher.c PRGs/RC4.c -std=c99 -lm
```

## Upcoming features:
* Finish testing StreamCipher with RC4
* Implement Salsa20 (w/ an internal nonce counter)
* Implement DES and AES
* Fix segmentation fault error when large keys used with RC4
