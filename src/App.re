open BsReactNative;

let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self =>
    <View>
       <Header /> </View>,
      /*</ReasonExpo.LinearGradient>*/
      /*</Text>*/
      /*{ReasonReact.string("To get started, edit App.re")}*/
      /*<Text style=Style.(style([color(String("white"))]))>*/
      /*style=Style.(style([padding(Pt(12.)), borderRadius(12.)]))>*/
      /*colors=[|"#DD4B39", "#C62C19"|]*/
      /*<ReasonExpo.LinearGradient*/
};

let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));
