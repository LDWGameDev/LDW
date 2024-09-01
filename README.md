# LDW
Unreal Engine module contains helper functions used in many of my projects, and is intended to be updated further more in the future. 
## Requirements
No requirements needed.
## How to Use
- Download the module, extract it and place it in the `/Source/` directory of either your plugin or game module.
- Configure your plugin/module to use the module in `.Build.cs` and `.uplugin` or `.uproject`
```cpp
PublicDependencyModuleNames.AddRange(new string[] {
    "LDW"
});
```
```
"Modules": [
  {
    "Name": "LDW",
    "Type": "Runtime",
    "LoadingPhase": "Default"
  }, 
]
```
