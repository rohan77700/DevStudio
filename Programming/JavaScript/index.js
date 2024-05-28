// JavaScript separation of concerns
console.log("UwU!")


// Variables

let name = 'Ro Han';
console.log(name);

// Cannot be a reserved keyword
// Should be meaningful
// Cannot start with a number (1name)
// Cannot contain a space or hyphen (-)
// Are case-sensitive

let firstName = 'Rohan';
let lastName = 'Pradhan';


// Constants

const interestRate = 0.3;
console.log(interestRate);

// if we don't need to reassign constants should be our default choice
// otherwise if we need to reassign variable use let


// Primitives / Value Types :
// String
// Number
// Boolean
// undefined
// null

let fname = 'Rohan'; // String Literal
let age = 24; // Number Literal
let isApproved = true; // Boolean Literal
let firstname = undefined;
let selectedColor = null;


// Dynamic Typing

// typeof age
// "number"
// age = 'twenty four'
// typeof age
// "string"

// String primitives
const message = 'hi'

// String object
const text = new String('hi');


// Reference Types :
// Object
// Array
// Function


// Objects

let person = {
    name: 'Ro Han',
    age: 24
};

// Dot notation
person.name = 'Jennie';

// Bracket notation
person['name'] = 'Rosé';

console.log(person.name);


// Arrays

let selectedColors = ['black', 'pink'];
selectedColors[2] = 'purple';
selectedColors[3] = 4;
console.log(selectedColors);
// typeof selectedColors
// "object"
console.log(selectedColors.length);


// Array Filter

const numbers = [1, -1, 2, 3];

const filtered = numbers.filter(n => n >= 0);

console.log(filtered);


// Array Map

const items = filtered.map(n => '<li>' + n + '</li>');
const html = '<ul>' + items.join('') + '</ul>';

console.log(html);


// Array Reduce

const sum = numbers.reduce((accumulator, currentValue) => {
    return accumulator + currentValue;
}, 0);

console.log(sum);


// Functions

// Performing a task
function greet(name, last_name) {
    console.log("Hello, " + name + ' ' + last_name)
}

greet('Jennie', 'Kim');

// Types of Functions

// Calculating a value
function square(number) {
    return number * number;
}

console.log(square(3));


// if else - contitional statements

let hour = 20;

if (hour >= 6 && hour < 12)
    console.log('Good morning');
else if (hour >= 12 && hour < 18)
    console.log('Good afternoon');
else
    console.log('Good evening');


// for loops

for (let i = 1; i <= 5; i++) {
    console.log('Hello Loops', i)
}