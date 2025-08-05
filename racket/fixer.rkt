#lang racket

;; CONTRACT: fixer: list, number, list or number or string
;; PURPOSE: to return the list x with each y in the list x replaced with number, list, or string z
;; EXAMPLE: (fixer '(1 2 3) 2 81) -> '(1 81 3)
;; DEFITION: 
(define (fixer x y z)
  (for/list ([i x])
        (cond
          ((= i y) z)
          (else i)
        )
  )
)
;; TESTS:
;; (fixer '(1 2 3) 2 81) -> '(1 81 3)
;; (fixer '(1 2 3) 2 '(2 3)) -> '(1 (2 3) 3)
;; (fixer '(1 2 3) 4 3) -> '(1 2 3)
;; (fixer '(1 4 9) 9 "nine") -> '(1 4 "nine")
