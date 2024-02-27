# Compiler Construction Repository

This repository contains C code for building a simple compiler. The compiler is designed to translate source code written in a custom language into executable machine code. This README provides an overview of the repository's structure and instructions for building and using the compiler.

## Repository Structure

The repository is organized as follows:

- **src**: Contains the source code for the compiler.
  - *lexer.c*: Implements the lexical analysis phase.
  - *parser.c*: Implements the parsing phase.
  - *semantic_analyzer.c*: Performs semantic analysis on the parsed code.
  - *code_generator.c*: Generates machine code from the analyzed code.
  - *main.c*: The main entry point for the compiler.
- **include**: Header files for the compiler source code.
- **tests**: Contains sample programs written in the custom language for testing the compiler.
- **docs**: Documentation related to the compiler construction process.
- **bin**: Output directory for compiled binaries.

## Building the Compiler

To build the compiler, follow these steps:

1. Clone the repository: `git clone https://github.com/Nzioka6350/C-compiler.git`
2. Navigate to the project directory: `cd C-compiler`
3. Compile the source code using a C compiler (e.g., GCC): `gcc -o bin/compiler src/*.c -Iinclude`

## Using the Compiler

Once the compiler is built, you can use it to compile programs written in the custom language. The general usage is as follows:

```bash
./bin/compiler input_file output_file
```

- `input_file`: The source code written in the custom language.
- `output_file`: The name of the output file that will contain the generated machine code.

For example:

```bash
./bin/compiler tests/example_program.c output.exe
```

## Running Tests

To run the tests included in the repository, you can use the provided test programs in the `tests` directory. Follow these steps:

1. Navigate to the project directory: `cd compiler-construction`
2. Run the test using the compiler: `./bin/compiler tests/test_program.c output_test.exe`

## Documentation

For more detailed information about the compiler construction process, refer to the documentation in the `docs` directory.

## Contributing

If you find issues or want to contribute to the development of the compiler, please open an issue or submit a pull request.

## License

This compiler is released under the [MIT License](LICENSE). Feel free to use, modify, and distribute it according to the terms of the license.

Happy coding!