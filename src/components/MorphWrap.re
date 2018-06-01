open MorphReplace;
type state = {mutable checked: bool};

type action =
  | Click(bool);

let component = ReasonReact.reducerComponent("MorphWrap");

let make = _children => {
  let click = (event, state) => Click(state.checked);
  {
    ...component,
    initialState: () => {checked: false},
    reducer: (action, state) =>
      switch (action) {
      | Click(data) => ReasonReact.Update({checked: ! data})
      },
    render: self => {
      Js.log("Renderd");
      Js.log(self.state.checked);
      <div>
        <div
          id="Faget"
          onClick=(
            _evt => {
              self.send(Click(self.state.checked));
              Js.log("Clickde");
              Js.log(self.state.checked);
            }
          )>
          <MorphReplace width=100 height=100>
            (self.state.checked ? <Freysi /> : <Elli />)
          </MorphReplace>
        </div>
      </div>;
    },
  };
};