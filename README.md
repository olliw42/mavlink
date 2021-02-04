## MAVLink Light ##

This is my fork of the MAVlink repository. I use it for submitting PRs, but my main use is the mavlink-light branch (https://github.com/olliw42/mavlink/tree/light).

This branch provides a modified C code generator (call mavgenerate_light.py instead of mavgenerate.py) which generates code which is MUCH more efficient in terms of flash, ram, stack, and computation time than the original (details were described here: https://github.com/mavlink/mavlink/pull/1127, except no. 7). This better efficiency in all disciplines is of much benefit especially for embeeded, source constraint systems, such as Arduino and STM32 platforms. 

By the nature of the code changes, they are essentially zero intrusive and thus highly reliable. I use this code in the STorM32 project since Mai 2019.

---

[![Build Status](https://github.com/mavlink/mavlink/workflows/Test%20and%20deploy/badge.svg)](https://github.com/mavlink/mavlink/actions?query=branch%3Amaster)
## MAVLink ##

MAVLink -- Micro Air Vehicle Message Marshalling Library.

MAVLink is a very lightweight, header-only message library for communication between drones and/or ground control stations. It consists primarily of message-set specifications for different systems ("dialects") defined in XML files, and Python tools that convert these into appropriate source code for [supported languages](https://mavlink.io/en/#supported_languages). There are additional Python scripts providing examples and utilities for working with MAVLink data.

> **Tip** MAVLink is very well suited for applications with very limited communication bandwidth. Its reference implementation in C is highly optimized for resource-constrained systems with limited RAM and flash memory. It is field-proven and deployed in many products where it serves as interoperability interface between components of different manufacturers.

Key Links:
* [Documentation/Website](https://mavlink.io/en/) (mavlink.io/en/)
* [Discussion/Support](https://mavlink.io/en/#support) (Slack)
* [Contributing](https://mavlink.io/en/contributing/contributing.html)
* [License](https://mavlink.io/en/#license)
