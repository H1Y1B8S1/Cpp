I agree that C++ is mostly taught wrong. I also think a high level approach is the best way. First impressions matter,
and teaching students how to use C++ inefficiently and wrongly is very bad. The nice thing is that it C++ also allows 
us to teach the "how" of low-level programming after they understand the "why". What do I mean by this? Many times students 
are taught how to do low-level programming without knowing where it is applicable. C++ provides us a nice framework where 
we can show how low-level stuff fit into the high level code.

If I designed a course, I would use string, vector, tuple, range-for, unique_ptr, and shared_ptr and show how C++ is just 
as high-level as pretty much any other language. I would emphasize RAII and how it is the centerpiece for all of C++'s resource management.
Then you can teach low-level stuff in the context of implementing standard library features that the students 
already know how to use. They get to look at under the hood.


RAII and move semantics - implement unique_ptr

Operator overloading - implement complex

Raw arrays and pointers - implement vector

Memory management and intro to atomics - implement shared_ptr and weak_ptr

Unions and pointers and c-style strings - implement string with small string optimization

Bit operations - implement bitset

Memory allocation strategies - implement allocator

Template metaprogramming - implement tuple

Algorithms - implement sort

Multithreading, concurrency, locks, condition variables - implement future and async

Exceptions - discuss the various exception safety guarantees and how to fulfill them when implementing the above features.

Cache friendly structures - have student use/measure std::map and std::unordered_map. Implement map as a sorted array. Implement unordered_map using various hashing strategies - measure performance and discuss tradeoffs.


This shows C++ as high level language. Unlike many other high-level languages, 
in C++ you can show how these high level features are implemented in terms of low-level features such as raw pointers and bit-flipping. 
Doing this, you will probably teach the student low-level stuff better, because by the time you get to low-level stuff, 
the student will be familiar with C++, and know why the low-level stuff matters. Because of this you will also be able to go into more details that you could not before.