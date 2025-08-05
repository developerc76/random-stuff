#lang racket

;; CONTRACT: esum: number, number -> integer
;; PURPOSE: compute the sum of all even numbers in between a and b (inclusive)
;; EXAMPLE: (esum 1.1 2.9) -> 2
;; DEFINITION:

(define (esum a b)
  (cond
    [(< a b)
     (define val 0)
     (cond
       [(= (ceiling a) (floor b)) 0])
     (for ([i (in-range (ceiling a) (+ 1 (floor b)))])
       (cond ((= 0 (remainder i 2)) (set! val (+ val i))))
     )
     (cond 
       ((= (- 1 1) 0) val))]
    [(< b a) (esum b a)]
    [(and (integer? a) (= 0 (remainder a 2))) a]
    [else 0]
))



;; TESTS:
;; (esum 1.1 3.2) -> 2
;; (esum -1.1 3.2) -> 2
;; (esum 3.2 1.1) -> 2
;; (esum 3.2 -3.1) -> 0
