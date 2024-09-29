# Análise da relação entre o tamanho do problema e o aumento de velocidade do computador

Nessa parte, estamos interessados em analisar o quanto o aumento da velocidade de um computador influencia no aumento o tamanho do problema que pode ser resolvido no mesmo tempo despendido no computador original.

Sendo assim, o aumento possível do tamanho do problema depende da complexidade do problema, por exemplo:

*Linear:* um problema do tipo linear segue a regra tal que $n' = k * n$, onde $n$ é o tamanho do problema resolvível em um tempo $t$ no computador original, $n'$ é o novo tamanho resolvível no mesmo tempo no novo computador $k$ vezes mais rápido. Ou seja, um computador 10 vezes mais rápido, consegue resolver no mesmo tempo um problema 10 vezes maior.

*Quadrático:* um problema quadrático segue a regra $n' = \frac{n}{\sqrt{k}}$, ou seja, um computador 10 vezes mais rápido pode resolver no mesmo tempo um problema cerca de 3.16 vezes maior.

*Cúbico:* um problema cúbico segue a regra $n' = \frac{n}{\sqrt[3]{k}}$, ou seja, um computador 10 vezes mais rápido pode resolver no mesmo tempo um problema cerca de 2.15 vezes maior.

*Exponencial:* um problema exponencial segue a regra $n' = n - \log_2(k)$, ou seja, resolve no mesmo tempo um problema apenas $log_2(k)$ unidades maior do que o original.

*Logarítmico:* um problema com complexidade logarítmica segue a regra $n' = n^k$, ou seja, um computador 10 vezes mais rápido pode resolver no mesmo tempo um problema $n^10$ vezes maior.

Assim, notamos que o aumento do tamanho do problema que pode ser resolvido no mesmo tempo por um computador mais rápido depende diretamente da complexidade do problema enfrentado.
