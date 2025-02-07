;;; haystack-mode.el --- Minor mode for Clojure and Java Stacktraces -*- lexical-binding: t -*-

;; Copyright © 2025 r0man
;;
;; Author: r0man <roman@burningswell.com>
;; Maintainer: r0man <roman@burningswell.com>
;; URL: https://github.com/r0man/tree-sitter-haystack
;; Version: 0.0.1
;; Package-Requires: ((emacs "26"))
;; Keywords: languages

;; This program is free software: you can redistribute it and/or modify
;; it under the terms of the GNU General Public License as published by
;; the Free Software Foundation, either version 3 of the License, or
;; (at your option) any later version.

;; This program is distributed in the hope that it will be useful,
;; but WITHOUT ANY WARRANTY; without even the implied warranty of
;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;; GNU General Public License for more details.

;; You should have received a copy of the GNU General Public License
;; along with this program.  If not, see <http://www.gnu.org/licenses/>.

;; This file is not part of GNU Emacs.

;;; Commentary:

;; Minor mode for Clojure and Java Stacktraces

;;; Code:

(require 'cider-stacktrace)
(require 'treesit)

(add-to-list 'treesit-extra-load-path "/home/roman/.guix-profile/lib/tree-sitter")

(defvar haystack-font-lock-feature-list
  '((method_name)
    (file_name)
    (line_number)
    (exception_type)
    (exception_message)))

(defvar haystack-font-lock-rules
  '(
    :language haystack
    :override t
    :feature exception_type
    ((exception_type) @cider-stacktrace-error-class-face)

    :language haystack
    :override t
    :feature exception_message
    ((exception_message) @cider-stacktrace-fn-face)

    :language haystack
    :override t
    :feature line_number
    ((line_number) @font-lock-bracket-face)

    :language haystack
    :override t
    :feature method_name
    ((method_name) @cider-stacktrace-fn-face)))

(defun haystack-setup ()
  "Setup treesit for html-ts-mode."
  (setq-local treesit-font-lock-feature-list
              haystack-font-lock-feature-list)
  (setq-local treesit-font-lock-settings
              (apply #'treesit-font-lock-rules
                     haystack-font-lock-rules))
  (treesit-major-mode-setup))

;;;###autoload
(define-derived-mode haystack-mode fundamental-mode "Haystack"
  "Major mode for editing HAYSTACK with tree-sitter."
  ;; :syntax-table sgml-mode-syntax-table
  (setq-local font-lock-defaults nil)
  (when (treesit-ready-p 'haystack)
    (treesit-parser-create 'haystack)
    (haystack-setup)))

(provide 'haystack-mode)

;;; haystack-mode.el ends here
