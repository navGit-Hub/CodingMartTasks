function swapBits(x, p1, p2, n)
{
    /* xor contains xor of two sets */
    let xor = ((x >> p1) ^ (x >> p2)) & ((1 << n) - 1);
 
    /* To swap two sets, we need to again XOR the xor with
     * original sets */
    return x ^ ((xor << p1) | (xor << p2));
}




console.log(swapBits(30,3,6,3))

