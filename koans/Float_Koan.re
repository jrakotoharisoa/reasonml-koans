open Jest;
open Helpers;
open Expect;

let () =
  describe("Float", () => {
    test("+. operator is used to add two floats", () =>{
      let result = __float__ +. __float__;
      expect(result) |> toEqual(42.007);
    });

    test("-. operator is used to subtract two floats", () =>{
      let result = __float__ -. __float__;
      expect(result) |> toEqual(42.007);
    });

    test("* operator is used to multiply two floats", () =>{
      let result = __float__ *. __float__;
      expect(result) |> toEqual(42.007);
    });

    test("/. operator is used to divide two floats", () =>{
      let result = __float__ /. __float__;
      expect(result) |> toEqual(42.007);
    });

  });