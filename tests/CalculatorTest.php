<?php
use PHPUnit\Framework\TestCase;
use App\Calculator;

require_once __DIR__ . '/../src/Calculator.php';

class CalculatorTest extends TestCase {
    public function testAdd() {
        $calc = new Calculator();
        $this->assertEquals(5, $calc->add(2, 3));
    }
}
