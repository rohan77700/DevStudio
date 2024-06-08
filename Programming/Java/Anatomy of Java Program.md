# Anatomy of a Java Program

## Function:
- A block of code that performs a task
- How we can code a function in Java:
```zsh
ReturnType Name() 
{
  ...
}
```
- If a function returns nothing, it's return type is `void`, void is a reserved keyword in Java
- Every Java program should have at least one function, class, i.e. `main()`, `class Main`.

## Class:
- A container of one or more functions
- How we define a class in Java:
```zsh
class Main 
{
    void main() 
    {
      ...
    }
}
```

```zsh
public class Main 
{
    public void main() 
    {
      ...
    }
} 
```

### Note:
- A function that is part of a class is known as a method.
- Classes and functions in Java need to have access modifiers defined.
- When naming classes, use the `PascalNamingConvention`.
- When naming a method, use `camelNamingConvention`.