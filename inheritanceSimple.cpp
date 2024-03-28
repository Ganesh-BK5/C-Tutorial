

// Note: 1) By default visibility mode is private
// Public inheritance: Provides an "is-a" relationship, where the derived class is a type of the base class.
//  It maintains the interface of the base class, allowing the derived class to be used wherever the base class is expected.

// Protected inheritance: Is less common and generally used when you want to prevent direct
//  access to base class members but still want to allow derived classes to access them.

// Private inheritance: Is used when you want to implement "implemented-in-terms-of" or
//  "implemented-in-terms-of-operations-on" relationships rather than "is-a" relationships.
//  It's the most restrictive form of inheritance and is often used for composition rather than pure inheritance.