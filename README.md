# float-intro

I'm working on a presentation that introduces the basics of IEEE 754 floating point numerical data.

The general idea is to provide some insight into the following class of gotchas:

```
$ node
> (0.1 + 0.2)
0.30000000000000004
```

Although a thorough understanding of the underlying bytes is not necessary to learn how to avoid such situations, a general knowledge of floaing point format helps in understanding what the limitations are.

# Overview

Slide deck contents in brief,

* Motivating Example
* Folklore for Avoiding Trouble
* Int, Fixed Point
* Scientific Notation, Floating Point
* .NET Decimal
* Fun Properties
* Inspecting Float Values in C
* Verifying Float Properties in C

# To-Do

* Add some illustrative figures that show bits as boxes

# Dependencies

* [Reveal.js](https://github.com/hakimel/reveal.js/) is included under the [MIT License](https://github.com/hakimel/reveal.js/blob/master/LICENSE): Copyright (C) 2017 Hakim El Hattab, http://hakim.se, and reveal.js contributors

# Bibliography

* [Wikipedia article on IEEE 754](https://en.wikipedia.org/wiki/IEEE_754)
* [Wikipedia article on Single-precision floating-point format](https://en.wikipedia.org/wiki/Single-precision_floating-point_format)
* [Wikipedia article on Endianness](https://en.wikipedia.org/wiki/Endianness)
* [Essential Mathematics for Games and Interactive Applications](http://www.essentialmath.com/book.htm)
* [IEEE-754 Floating Point Converter on h-schmidt.net](https://www.h-schmidt.net/FloatConverter/IEEE754.html)
* [Berkeley Introduction to Fixed Point](http://www-inst.eecs.berkeley.edu/~cs61c/sp06/handout/fixedpt.html)
* [C# in Depth article about Decimal](http://csharpindepth.com/Articles/General/Decimal.aspx)
* [Stanford Bit Twiddling Hacks](https://graphics.stanford.edu/~seander/bithacks.html)
* [Tricks With the Floating-Point Format](https://randomascii.wordpress.com/2012/01/11/tricks-with-the-floating-point-format/)
