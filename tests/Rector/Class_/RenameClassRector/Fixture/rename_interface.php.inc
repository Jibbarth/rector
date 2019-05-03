<?php

namespace A;

interface B
{
    public function createSelf(): B;
}

?>
    -----
<?php

namespace C;

interface D
{
    public function createSelf(): \C\D;
}

?>
