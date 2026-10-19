# Token in C

- A token is the **smallest meaningful unit** of a C program that compiler recognizes.
- C has 6 main types of tokens
  - **Keywords**
    - reserved words with predefined meanings
    - all letters are lowercase
    - `int`, `if`, `return`
  - **Identifiers**
    - Names of variables, functions etc.
    - `main`, `age`, `total`
  - **Constants**
    - fixed values
    - `10`, `3.14`
  - **String Literals**
    - text enclosed in double quotes
    - `"Hello World"`
  - **Operators**
    - perform operations
    - `+`, `-`, `=`, `==`
  - **Punctuators (special symbols)**
    - structure and separate program element
    - `;`, `,` `()`, `{}`

Example

```c
int main()
{
    int num = 10;
    return 0;
}
```

Here are some tokens from the program:

- `int` → Keyword
- `main` → Identifier
- `(`, `)` → Punctuators
- `{`, `}` → Punctuators
- `num` → Identifier
- `=` → Operator
- `10` → Constant
- `;` → Punctuator
- `return` → Keyword
- `0` → Constant

> Remember: The compiler breaks your C source code into tokens during lexical analysis, the first stage of compilation.
