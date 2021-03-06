## Morpheus programming language

This repo contains the implementation of Morpheus, a programming language with Lisp and Pythonic and Elixir roots. Feel free to clone it and run it on your system. Tested on Linux.

### Getting Started

You'll want to clone the repository and build the language on your system.

### FAQ

Is this named after Morpheus in **The Matrix**?

_Yes._

What are the next features to be implemented?

_Ideally some of the matrix operations like what I'm currently able to run using **matplotlib** and **numpy** in Python._

How do I compile the REPL?

__Something like the following
  ```
    cc -std=c99 -Wall prompt.c -ledit -o prompt
  ```

  OR

  ```
    cc -std=c99 -Wall parsing.c mpc.c -ledit -lm -o parsing
  ```

--
### Compiling other modules

*
```
  cc -std=c99 -Wall evaluation.c mpc.c -ledit -lm -o evaluation
```
__
### Feedback or Support

Have feedback for the creator of Morpheus? Find me on Twitter @towersofzeyron or
[towersofzeyron](http://towersofzeyron.com)
