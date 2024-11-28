<h1 align="center">
    reamus</br>
    <span style="font-size: 1.25rem">
        self-hosted CMS powered by 
        ✨<a href="https://github.com/dmmulroy/create-melange-app">create-melange-app✨</a>
    </span>
</h1>

### Table of Contents

- [Getting Started](#getting-started)
- [Your project layout](#your-project-layout)
- [Installing ReasonML packages](#installing-ReasonML-packages)
- [Getting Help](#getting-help)

## Getting Started

Welcome to your `Melange` & `ReasonML` app!

### Running your application

To run your application and start a dev server with hot module reloading, simply
run:
```sh
pnpm run dev
```
### Building your application

Building your application is as simple as running:

```sh
pnpm run build
```

This will handle running `Melange`'s build process and bundling your application
with `Vite`. Your bundled application and output will be located in `./dist`
after the build process completes.

## Your project layout

The following is a high level view of your project and application.
Many of these files will contain additional comments, explanations, examples,
and help for learning and getting started with `ReasonML` and `Melange.`

## Installing ReasonML packages

Installing ReasonML packages is easy, but we have to use a separate
CLI ([for the time being](https://github.com/dmmulroy/create-melange-app/issues/61)). To install dependencies, we are
going to use `opam`, which is ReasonML's package manager. You can
search for dependencies and packages on
[OCaml.org](https://ocaml.org/packages/search?q=).

There are [some requirements](https://discuss.ocaml.org/t/whats-possible-with-melange/13806/3?u=dmmulroy) to use a package with `Melange` you should read
about. That being said, once you find a package you want to install you can
do the following steps:

1. Add the library to your `dune-project`'s `depends` section
2. Run the following commands

```sh
eval $(opam env) # This activates your local switch in your shell
dune build reamus.opam # This will regenerate your `opam` file
opam update # This will ensure `opam` can see the most recent versions of packages
opam install . --deps-only --yes # This will install your new packages
```
