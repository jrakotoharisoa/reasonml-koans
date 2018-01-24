open Jest;
open Helpers;
open Expect;

let () =
  describe("Boolean", () => {
    test("true should be true", () =>
      expect(__bool__) |> toEqual(true)
    );

    test("false should be false", () =>
      expect(__bool__) |> toEqual(false)
    );
  });