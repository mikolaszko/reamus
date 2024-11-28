 module App = {
  [@react.component]
  let make = () => {
    /*
     * For example, if we have no dependencies, we use `useEffect0`.
     *
     * If we have one dependency, we use `useEffect1`.
     */
    React.useEffect0(() => {
      //Some(() => Js.Global.clearTimeout(timeout_id));
      None;
    });
    <div className="flex h-full w-full">
      <Components.Sidebar />
      <Components.Main />
    </div>
  };
};

/*{show_configuration ? <Components.Configuration configuration /> : React.null} */

ReactDOM.querySelector("#root")
->(
    fun
    | Some(root_elem) => {
        let root = ReactDOM.Client.createRoot(root_elem);
        ReactDOM.Client.render(root, <App />);
      }
    | None =>
      Js.Console.error(
        "Failed to start React: couldn't find the #root element",
      )
  );

