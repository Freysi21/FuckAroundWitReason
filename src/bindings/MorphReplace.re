module MorphReplace = {
  [@bs.module "react-svg-morph"]
  external morphReplace : ReasonReact.reactClass = "MorphReplace";

  [@bs.deriving abstract]
  type jsProps = {
    width: int,
    height: int,
    /*duration: int,
      viewBox: string,
      rotation: string,
      preserveAspectRatio: string,*/
  };
  let make =
      (
        ~width,
        ~height,
        /*~duration,
          ~viewBox,
          ~rotation,
          ~preserveAspectRatio,*/
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=morphReplace,
      ~props=
        jsProps(
          ~width,
          ~height,
          /*~duration,
            ~viewBox,
            ~rotation,
            ~preserveAspectRatio,*/
        ),
      children,
    );
};