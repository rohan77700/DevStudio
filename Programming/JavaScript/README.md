# JavaScript Language

### What is JavaScript

***JavaScript*** was initially created to “make web pages alive”.

The programs in this language are called scripts. They can be written right in a web page’s HTML and run automatically as the page loads.

Scripts are provided and executed as plain text. They don’t need special preparation or compilation to run.

In this aspect, JavaScript is very different from another language called Java.

Today, JavaScript can execute not only in the browser, but also on the server, or actually on any device that has a special program called **the JavaScript engine.**

For example:
- *V8* – in Chrome, Opera and Edge.
- *SpiderMonkey* – in Firefox.

### Why is it called JavaScript

When JavaScript was created, it initially had another name: “LiveScript”. But Java was very popular at that time, so it was decided that positioning a new language as a “younger brother” of Java would help.

But as it evolved, JavaScript became a fully independent language with its own specification called ECMAScript, and now it has no relation to Java at all.

### How do engines work?
Engines are complicated. But the basics are easy.

1. The engine (embedded if it’s a browser) reads (“parses”) the script.
2. Then it converts (“compiles”) the script to machine code.
3. And then the machine code runs, pretty fast.

The engine applies optimizations at each step of the process. It even watches the compiled script as it runs, analyzes the data that flows through it, and further optimizes the machine code based on that knowledge.


The "script" tag:
```zsh
<script>
    console.log("Hello, World!");
</script>
```

## Resources

- [JavaScript](https://javascript.info/)
- [Documentation](https://developer.mozilla.org/en-US/docs/Web/JavaScript)
- [JavaScript Cheat Sheet](https://overapi.com/javascript)