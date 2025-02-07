(define-module (tree-sitter-hackstack-package)
  #:use-module ((guix licenses) #:prefix license:)
  #:use-module (gnu packages tree-sitter)
  #:use-module (gnu packages)
  #:use-module (guix git-download))

(define tree-sitter-grammar
  (@@ (gnu packages tree-sitter) tree-sitter-grammar))

(define-public tree-sitter-haystack
  (let ((commit "8d7cb47f3e44f2e23574a7a7fcb2a5bb21a4c0ce")
        (revision "0"))
    (tree-sitter-grammar
     "haystack" "Haystack"
     "06hlwwf1w69qv04njn6x3s2h7gvf8hca2d6iiy9s8xj4am99lij2"
     (git-version "0.0.1" revision commit)
     #:repository-url "https://github.com/r0man/tree-sitter-haystack"
     #:commit commit)))

tree-sitter-haystack
