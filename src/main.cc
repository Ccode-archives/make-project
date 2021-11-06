set args = argv()
if args[0] == "py" {
    python()
}
elif args[0] == "c" {
    c()
}
elif args[0] == "-h" {
    print("python <project type>")
    print("\nWorking types:")
    print("   * py")
    print("   * c")
}
