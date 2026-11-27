def log_message(level, *args):
    message = " ".join(str(item) for item in args)
    print(f"[{level}] {message}")


log_message("INFO", "User logged in", "User ID:", 101)
log_message("ERROR", "Database connection failed", "Retry:", 3)
log_message("WARNING", "Low disk space", "Remaining:", "2GB")
