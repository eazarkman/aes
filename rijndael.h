/*
 * This implementation of the Rijndael cipher was obtained from:
 * http://www.efgh.com/software/rijndael.htm
 * Author: Philip J. Erdelsky (pje@acm.org)
 * Code released to public domain, according to Web site
 *
 * Minor changes made by:
 * Ethan L. Miller (elm@cs.ucsc.edu)
 */
#ifndef H__RIJNDAEL
#define H__RIJNDAEL

int rijndaelSetupEncrypt(unsigned long *rk, const unsigned char *key,
  int keybits);
int rijndaelSetupDecrypt(unsigned long *rk, const unsigned char *key,
  int keybits);
void rijndaelEncrypt(const unsigned long *rk, int nrounds,
  const unsigned char plaintext[16], unsigned char ciphertext[16]);
void rijndaelDecrypt(const unsigned long *rk, int nrounds,
  const unsigned char ciphertext[16], unsigned char plaintext[16]);

#define KEYLENGTH(keybits) ((keybits)/8)
#define RKLENGTH(keybits)  ((keybits)/8+28)
#define NROUNDS(keybits)   ((keybits)/32+6)

#endif

