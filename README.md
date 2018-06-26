# float-intro

I'm working on a presentation that introduces the basics of IEEE 754 floating point numerical data.

The general idea is to provide some insight into the following class of gotchas:

```
$ node
> (0.1 + 0.2)
0.30000000000000004
```

Although a thorough understanding of the underlying bytes is not necessary to learn how to avoid such situations, a general knowledge of floaing point format helps in understanding what the limitations are.

# Bibliography

* [Wikipedia article on IEEE 754](https://en.wikipedia.org/wiki/IEEE_754)
* [Wikipedia article on Single-precision floating-point format](https://en.wikipedia.org/wiki/Single-precision_floating-point_format)
* [Wikipedia article on Endianness](https://en.wikipedia.org/wiki/Endianness)
* [Essential Mathematics for Games and Interactive Applications](http://www.essentialmath.com/book.htm)
* [IEEE-754 Floating Point Converter on h-schmidt.net](https://www.h-schmidt.net/FloatConverter/IEEE754.html)
