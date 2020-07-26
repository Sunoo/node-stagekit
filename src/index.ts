import bindings from 'bindings';

const gyp = bindings('stagekit-api.node');

export enum StrobeSpeed {
  Off = 0,
  Slow = 1,
  Medium = 2,
  Fast = 3,
  Fastest = 4
}

export class StageKit {
  public readonly eventfile: string;

  constructor(eventfile?: string) {
    if (eventfile) {
      this.eventfile = gyp.Open(eventfile);
    } else {
      this.eventfile = gyp.Open();
    }
  }

  Close(): void {
    gyp.Close();
  }

  AllOff(): void {
    gyp.AllOff();
  }

  SetStrobe(speed: StrobeSpeed): void {
    gyp.SetStrobe(speed as number);
  }

  SetFog(fog: boolean): void {
    gyp.SetFog(fog);
  }

  SetRed(red: number): void {
    gyp.SetRed(red);
  }

  SetYellow(yellow: number): void {
    gyp.SetYellow(yellow);
  }

  SetGreen(green: number): void {
    gyp.SetGreen(green);
  }

  SetBlue(blue: number): void {
    gyp.SetBlue(blue);
  }
}