# Time complexity of recursion.

```C
factorial (n) {    
    if (n = 0) 
        return 1
    else
        return n * factorial(n-1)
}
```
So,
```
T(n) = T(n-1) + 3   (3 is for As we have to do three constant operations like 
                 multiplication,subtraction and checking the value of n in each recursive 
                 call)

     = T(n-2) + 6  (Second recursive call)
     = T(n-3) + 9  (Third recursive call)
     .
     .
     .
     .
     = T(n-k) + 3k
     till, k = n

     Then,

     = T(n-n) + 3n
     = T(0) + 3n
     = 1 + 3n
```
Therefore, The time complexity of recursive factorial is **O(n)**.

## Master Theorm

> T(n) = aT(n/b) + (n<sup>k</sup>log<sup>p</sup>n)
* n : size of the problem.
* a : number of subproblem in recursion.
* n/b : size of each sub problem.
* b > 1, k >= 0 and p is a real number. 

-> if **a > b<sup>k</sup>,** then 
>T(n) = θ(n<sup>log<sub>b</sub>a</sup>)<br>

-> if **a== b<sup>k</sup>**, then <br>
(a) if **p > -1**, then 

>T(n) = θ(n<sup>log<sub>b</sub>a</sup>log<sup>p+1</sup>n) <br>

(b) if **p == -1**, then 
>T(n) = θ(n<sup>log<sub>b</sub>a</sup>log(logn) ) <br>

(c) if **p < -1**, then 
>T(n) = θ(n<sup>log<sub>b</sub>a</sup>) <br>
 
-> if **a < b<sup>k</sup>**, then<br>
(a) if **p > 0**, then 

>T(n) = θ(n<sup>k</sup>log<sup>p</sup>n)<br>

(b) if **p <= 0**, then 

>T(n) = θ(n<sup>k</sup>)

### Question

1) T(n) = 8T(n/4) – n2logn

Ans (-ve ) sign master theorm is invalid.

2) 
```C
A(n)
{
if(n<=1)
return 1;
else
return A(√n);
}
```
Ans T(n)= 1 +T(n<sup>1/2</sup>)
Let-

n = 2m ……(1)

Then-

T(2m) = T(2m/2) + 1

Now, let T(2m) = S(m), then T(2m/2) = S(m/2)

So, we have-

S(m) = S(m/2) +1

Now, we can easily apply Master’s Theorem.

 

We compare the given recurrence relation with S(m) = aS(m/b) + θ (mklogpm).

Then, we have-

a = 1

b = 2

k = 0

p = 0

 

Now, a = 1 and bk = 20 = 1.

Clearly, a = bk.

So, we follow case-02.

 

Since p = 0, so we have-

S(m) = θ (mlogba.logp+1m)

S(m) = θ (mlog21.log0+1m)

S(m) = θ (m0.log1m)

 

Thus,

S(m) = θ(logm) ……(2)

 

Now,

From (1), we have n = 2m.
So, logn = mlog2 which implies m = log2n.
 

Substituting in (2), we get-

S(m) = θ(loglog2n)

Or

**T(n) = θ (loglog2n)**

---
```
T(n)=T(n-1)+3
a= 1
```
The given recurrence is of the form:

T(n)=aT(n-b)+f(n), n>1 for some constants c,a>0,b>0,k>=0 and function f(n) and could be solved using Subtract and Conquer Recurrence method.

If f(n) is of the form n^k then,

T(n)={O(n^k), if a<1

O(n^(k+1)),if a=1

O(n^ka^(n/b)), if a >1}