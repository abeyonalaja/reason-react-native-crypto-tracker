open BsReactNative;

module Styles = {
  open Style;

  let headerContainer = style([display(Flex), marginTop(Pt(55.)), alignItems(Center)]);

  let text = style([color(String("#000")), fontSize(Float(24.))]);
};

let component = ReasonReact.statelessComponent("Header");

let make = _children => {
  ...component,
  render: _self =>
    <View style=Styles.headerContainer> <Text style=Styles.text> {ReasonReact.string("CRYPTO APP")} </Text> </View>,
};
