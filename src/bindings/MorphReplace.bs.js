// Generated by BUCKLESCRIPT VERSION 3.1.4, PLEASE EDIT WITH CARE
'use strict';

var ReasonReact = require("reason-react/src/ReasonReact.js");
var ReactSvgMorph = require("react-svg-morph");

function make(width, height, children) {
  return ReasonReact.wrapJsForReason(ReactSvgMorph.MorphReplace, {
              width: width,
              height: height
            }, children);
}

var MorphReplace = /* module */[/* make */make];

exports.MorphReplace = MorphReplace;
/* ReasonReact Not a pure module */
