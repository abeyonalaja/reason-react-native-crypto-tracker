open BsReactNative;

let component = ReasonReact.statelessComponent("Header");

let make = _children => {
  ...component,
  render: _self => <View> <Text> {ReasonReact.string("CRYPTO APP")} </Text> </View>,
};
