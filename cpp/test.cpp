struct Person {
  int age;
  int heightCm;
};

// Instead of a C++ style "class", think of this as a Haskell style typeclass.
class PersonInteractor {
  virtual int getAge() = 0;
  virtual int getHeight() = 0;
}

// This would be the equivalent of the following in Haskell:
// class PersonInteractor a where
//   getAge :: a -> Int
//   getHeight :: a -> Int
//
class PersonInstance: puplic PersonInteractor {
  Person data;
  virtual int getAge() { return data.age; }
  virtual int getHeight() { return data.height; }
}
