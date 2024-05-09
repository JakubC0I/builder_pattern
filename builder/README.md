### Project Documentation
This project implements the Builder design pattern in C++. The project structure is as follows:

- builders/ ("builders"): This directory contains the PizzaBuilder class and its subclasses HawaiianPizzaBuilder and SpicyPizzaBuilder. These classes define the steps to build a pizza.
- products/ ("product to be created"): This directory contains the Pizza class, which represents the product to be built.
- Cook.cpp ("director"): This file contains the Cook class, which uses a PizzaBuilder to create a Pizza.

### Builder Design Pattern

#### !!Caution - this example represents more a abstract factory. Builders often do not have a common interface but just a concrete class!!
The Builder design pattern is a **creational design pattern** that lets you construct complex objects step by step. It separates the construction of an object from its representation, allowing the same construction process to create different representations.

In this project, the PizzaBuilder class is the Builder. It defines an interface for creating parts of a Pizza object. The HawaiianPizzaBuilder and SpicyPizzaBuilder classes are Concrete Builders. They implement the Builder interface and define the specifics of the creation process for different types of pizzas.

The Cook class is the Director. It constructs an object using the Builder interface. The Pizza class is the Product. It represents the complex object under construction.

The Builder pattern is used when:

The algorithm for creating a complex object should be independent of the parts that make up the object and how they're assembled.
The construction process must allow different representations for the object that's constructed.
In the context of this project, the Builder pattern allows us to create Pizza objects in a step-by-step manner, hiding the complexity of creation from the client code. Different types of pizzas can be created using the same construction process by employing different builders.