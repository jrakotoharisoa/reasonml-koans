open Jest;
open Expect;
open Helpers;

let () =
  describe("Let", () => {

    test("should bind name to value", () => {
      let animal = "dog";
      expect(__string__) |> toEqual(animal);
    });

    test("should allow to create new binding with the same name", () => {
      let animal = "dog";
      let animal = "cat";
      expect(__string__) |> toEqual(animal);
    });

    test("should allow to see previous bindings in block", () => {
      let animal = "dog";
      {
        expect(__string__) |> toEqual(animal);
      };
    });

    test("should allow blocks to have their own scope", () => {
      let animal = "dog";
      {
        let animal = "cat";
        expect(__string__) |> toEqual(animal);
      };
    });

    test("should prevent to see bindings define outside of a block", () => {
      let animal = "dog";
      {
        let animal = "cat";
      };
      expect(__string__) |> toEqual(animal);
    });


  });