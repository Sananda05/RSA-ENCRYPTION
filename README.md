# RSA-ENCRYPTION

RSA algorithm involves four steps:
1.key generation
2.key distribution
3.encryption 
4.decryption

Key generation:

1.choose two distinct prime number p & q.
2.compute N=pq
3.compute λ(n)=(p-1)(q-1)
4.Choose an integer e such that 1 < e < λ(n), where gcd(e,λ(n))=1, that means e & λ(n) are co-prime.
5.Determine de=1 mod λ(n), or d= inverse of (e mod λ(n))


Key distribution:

In RSA system the sender and the receiver will know the public encryption key to encrypt the message and only the
receiver will use his private decryption key to decrypt the message.


Encryption:

c(m) ≡ m^e ( mod n ), where m is the positional value of the text.


Decryption:

m(c) ≡ c^d (mod n )
