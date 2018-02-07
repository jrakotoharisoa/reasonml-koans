open Jest;
open Helpers;
open Expect;

let () =
  describe("Integer", () => {
    test("+ operator is used to add two integers", () => {
      let result = __int__ + __int__;
      expect(result) |> toEqual(42);
    });

    test("- operator is used to subtract two integers", () => {
      let result = __int__ - __int__;
      expect(result) |> toEqual(42);
    });

    test("* operator is used to multiply two integers", () => {
      let result = __int__ * __int__;
      expect(result) |> toEqual(42);
    });

    test("/ operator is used to divide two integers", () => {
      let result = __int__ * __int__;
      expect(result) |> toEqual(42);
    });

  });