;; Learning Common lisp with fibonacci.lisp

(defun fibonacci (n)
  (if (> 2 n) 1
  (+ (fibonacci (- n 1)) (fibonacci (- n 2)) )
  )
  )
