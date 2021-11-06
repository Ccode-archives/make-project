import os

func error() {
    js throw 'error'; js
}
func folder(dir) {
    js if (typeof dir === 'undefined') { js
        js throw 'Parameter not given!'; js
    }
    js if (!require('fs').existsSync(dir)) { js
    js require('fs').mkdirSync(dir, 0744); js
    }
}

func file(file) {
    js if (typeof file === 'undefined') { js
        js throw 'Parameter not given!'; js
    }
    js if (!require('fs').existsSync(file)) { js
    js require('fs').writeFile(file, '', function (err) { js
        js if (err) throw err; js
    js }); js
    }
}

func message(lang="null") {
    print("Made a " + lang + " project!")
}
func python() {
    file("main.py")
    file("README.md")
    message("python")
}

func c() {
    folder("src")
    folder("doc")
    folder("lib")
    file("README.md")
    file("Makefile")
    message("c")
}

