(define-module (tree-sitter-hackstack-package)
  #:use-module ((guix licenses) #:prefix license:)
  #:use-module (gnu packages tree-sitter)
  #:use-module (gnu packages)
  #:use-module (guix git-download))

(define tree-sitter-grammar
  (@@ (gnu packages tree-sitter) tree-sitter-grammar))

(define-public tree-sitter-haystack
  (let ((commit "419fa3698350a052a060d4fcb0a72fe0807b5a06")
        (revision "0"))
    (tree-sitter-grammar
     "haystack" "Haystack"
     "1w80b7xii494rf9b9msy7jbagxsqq25xxz5srhslw9h82b9qzywl"
     (git-version "0.0.1" revision commit)
     #:repository-url "https://github.com/r0man/tree-sitter-haystack"
     #:commit commit)))

tree-sitter-haystack
