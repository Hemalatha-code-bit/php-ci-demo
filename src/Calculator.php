<?php

namespace App;

class Calculator
{
    public function add($a, $b)
    {
        return $a + $b;
    }
}

// Trigger build  ← this line is fine *only outside* the class
