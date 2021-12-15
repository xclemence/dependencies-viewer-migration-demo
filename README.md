# Migration step

- Remove multi target build option on **PeNet** projet
- Start migration

```
upgrade-assistant upgrade --ignore-unsupported-features --skip-backup -e Dependencies.Viewer.Wpf.App.csproj --non-interactive Dependencies.Viewer.sln
upgrade-assistant upgrade --ignore-unsupported-features --skip-backup -e Dependencies.Analyser.Mono.csproj --non-interactive Dependencies.Viewer.sln
```

- Cli/C++ migration
  - remove .Net Framework references
  - Set Configuration Properties -> Advanced -> Common Language Runtime Support to **.NET Core Runtime Support**
  - Apply
  - Set Configuration Properties -> Advanced -> .NET Core Target Framework to **net6.0**
  - Set **Dependencies.Analyser.Native** Target framework to **net6.0**

- Remove MvvmLightLibs nuget package
  - Fix issues

- Fix assembly loading issue

- Fix missing method issue
  -  Set **Dependencies.Analyser.Mono** Target framework to **net6.0**


