// 4 Pillars of Object-oriented Programming

// - Encapsulation -> Reduce complexity + increase reusability
// - Abstraction -> Reduce complexity + isolate impact of changes
// - Inheritance -> Eliminate redundant code
// - Polymorphism -> Refactor ugly switch/case statements


// Procedural way
let baseSalary = 30_000;
let overtime = 10;
let rate = 20;

function getWage(baseSalary, overtime, rate) {
    return baseSalary + (overtime * rate);
}

// Object-oriented way
let employee = {
    baseSalary: 30_000,
    overtime: 10,
    rate: 20,
    getWage: function() {
        return this.baseSalary + (this.overtime * this.rate);
    }
};

employee.getWage();


// Functions are Objects


// Primitives are copied by their value
// Objects are copied by their reference


// this keyword

const video = {
    title: 'pie',
    play() {
        console.log(this);
    }
};

function Video(title) {
    this.title = title;
    console.log(this);
}

const v = new Video('pie');


// Objects Literals

const circle = {
    radius: 1,
    location: {
        x: 1,
        y: 1
    },
    draw: function() {
        console.log('draw');
    }
};

circle.draw();


// Factories Function

function createCircle(radius) {
    return {
        radius,
        draw: function() {
            console.log('Draw');
        }
    }
}

const circleFactory = createCircle(1);
circleFactory.draw();


// Constructor Function

function Circle(radius) {
    console.log('this', this);
    this.radius = radius;
    this.draw = function() {
        console.log('Draw Circle');
    }
}

const another = new Circle(10);


// Adding / Removing Properties

another.location = { x: 1 };
delete another['location'];


// Enumerating Properties

for (let key in another) {
    if (typeof another[key] !== 'function')
    console.log(key, another[key]);
}

const keys = Object.keys(another);
console.log(keys);

if ('radius' in another)
    console.log('Circle has a radius');


// Cloning an Object

const clone = Object.assign({
    color: 'yellow'
}, another);
console.log(clone);


// Abstraction

// Hide the details
// Show the essentials
function Circle(radius) {
    this.radius = radius;
    
    this.defaultLocation = { x: 0, y: 0 };
    
    this.computeOptimumLocation = function(factor) {
        // ...
    }
    
    this.draw = function() {
        this.computeOptimumLocation(0.1);

        console.log('Draw Circle');
    }
}

const abstract = new Circle(10);
abstract.draw();


// Private Properties and Methods

function Circle(radius) {
    this.radius = radius;
    
    let defaultLocation = { x: 0, y: 0 };
    
    let computeOptimumLocation = function(factor) {
        // ...
    }
    
    this.draw = function() {
        computeOptimumLocation(0.1);
        // defaultLocation
        // this.radius

        console.log('Draw Circle');
    }
}

const private = new Circle(10);
private.draw();


// Getters / Setters

function Circle(radius) {
    this.radius = radius;
    
    let defaultLocation = { x: 0, y: 0 };

    this.getDefaultLocation = function() {
        return defaultLocation;
    }
    
    this.draw = function() {
        console.log('Draw Circle');
    }

    Object.defineProperty(this, 'defaultLocation', {
        get: function() {
            return defaultLocation;
        },
        set: function(value) {
            if (!value.x || !value.y)
                throw new Error('Invalid location');

            defaultLocation = value;
        }
    });
}

const rand = new Circle(10);
// rand.defaultLocation = 1; // Error -> Invalid location
rand.draw();


// Classes

class Person {
    constructor(name) {
        this.name = name;
    }

    walk() {
        console.log('walk');
    }
}

const human = new Person('Ro Han');
console.log(human);


// Inheritance

class Singer extends Person {
    constructor(name, talent) {
        super(name);
        this.talent = talent;
    }

    sing() {
        console.log('sing');
    }
}

const singer = new Singer('Jennie', 'Rap & Vocal');
console.log(singer);