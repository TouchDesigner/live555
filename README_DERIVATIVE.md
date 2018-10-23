live555
=======

Source and project files to build live555 as a library for dynamic linking.

Not all classes and functions are currently exported. To export additional classes or functions:

- `#import "Platform.h"` in the appropriate header
- add `LIVE555_API` after the class keyword or before the function declaration.
